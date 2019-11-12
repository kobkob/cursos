# Instalaçao e configuração SSH - Debian e derivados
SSH (Secure Shell) protocolo, é usado para administração de sistemas Linux. SSH usa encriptação para tornar segura a conecção entre um client e um servidor. Para entender melhor pode consultar (https://www.ssh.com/ssh/protocol/). SSH é usado por maior parte de datacenters e grandes empresas.
# Instalação
#### sudo apt install openssh-server
# Ativação do serviço
#### systemctl enable ssh && systemctl start ssh
Seu servidor SSH ja vai estar funcional apos esse 3 comandos.! 

# Configuração
##### Configurações focadas em segurança!
##### Arquvio de configuração do ssh **/etc/ssh/sshd_config**
> - **Port**: Por default o SSH usa a porta **22**, que acaba por ser obvio para qualquer pessoa que tente acessar seu servidor,
			logo é recomendado trocar de porta, por exemplo "**Port 3000**"
> - **LoginGraceTime**: O LoginGraceTime consiste no tempo maximo que voçe pode demorar entre iniciar sua conecção ate iniciar o login no servidor. Por default o tempo maximo é **2 minutos**, mas voçe nunca demorara mais que **1 min** a dar login no seu servidor. Logo podera diminuir o tempo maximo para um tempo menor, como por exemplo 
			**"45" segundos**. -    ***LoginGraceTime 45***
> - **PermitRootLogin**: O PermitRootLogin consiste em permitir login no usuario ROOT de seu servidor. É recomendado que 
			não o permita. Pois num ataque ao seu servidor, o atacante ira sempre atacar o usuario **ROOT**, por ser o
			user default do Linux e com todas as permições. Logo se voçe nao permitir o login em **ROOT**, o atacante nao conseguira aceder seu 
			servidor. Tera de descomentar a linha **PermitRootLogin** e setar ele para **"no"** ficando **PermitRootLogin no**
		










