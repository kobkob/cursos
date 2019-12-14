Como aprender a hackear
Eric Steven Raymond
Empresas Thyrsus 

< esr@thyrsus.com > 
Copyright © 2014 Eric S. Raymond

Histórico de Revisão
Revisão 1.2	2014-11-30	esr
Nova seção sobre ser original.
Revisão 1.1	2014-11-23	esr
Feedback incorporado do Google+, incluindo boas sugestões de Peter da Silva e John D. Bell.
Revisão 1.0	2014-11-21	esr
Versão inicial.
Índice

O que é Hacking?
Estágios de Aprendizagem Como Hackear
O ciclo de invasão incremental
Desenvolvendo seu senso de design
Sendo original
O que é Hacking?
O “ hacking ” sobre o qual falaremos neste documento é a programação exploratória em um ambiente de código aberto. Se você acha que “ hackear ” tem algo a ver com crime de computador ou quebra de segurança e veio aqui para aprender isso, você pode ir embora agora. Não há nada para você aqui.

Traduções deste documento estão disponíveis em: Húngaro

Hacking é basicamente [1] um estilo de programação, e seguir as recomendações deste documento pode ser uma forma eficaz de adquirir habilidades de programação de propósito geral. Não é garantido que esse caminho funcione para todos; parece funcionar melhor para aqueles que começam com um talento acima da média para programação e um bom grau de flexibilidade mental. As pessoas que aprendem com sucesso esse estilo tendem a se tornar generalistas com habilidades que não estão fortemente vinculadas a um domínio ou idioma de aplicativo específico.

Note que pode-se fazer hacking sem ser um hacker . “ Hacking ” , em linhas gerais, é uma descrição de um método e estilo; " Hacker " implica que você hackeia, e também está ligado a uma cultura particular ou tradição histórica que usa este método. Corretamente, " hacker " é uma honra concedida por outros hackers.

Hacking não tem aparato formal suficiente para ser uma metodologia completa na maneira como o termo é usado na engenharia de software, mas tem algumas características que tendem a diferenciá-lo de outros estilos de programação.

Hacking é feito em código aberto. Hoje, as habilidades de hacking são o nível micro individual do que é chamado de “ desenvolvimento de código aberto ” no macro-nível social. [2] Um programador trabalhando no estilo hacker espera e prontamente usa revisão por pares do código-fonte por outros para suplementar e ampliar sua habilidade individual.

Hackear é leve e exploratório. Procedimentos rígidos e especificações a priori elaboradas não têm lugar na pirataria; em vez disso, a tendência é experimentar e descobrir com um tempo de liberação rápido.

Hackear coloca um alto valor na modularidade e reutilização. No estilo hacker, você tenta nunca escrever um código que só pode ser usado uma vez. Você se inclina a fazer ferramentas gerais ou bibliotecas que possam ser especializadas no que você quer, congelando alguns argumentos / variáveis ​​ou fornecendo um contexto.

O hacking favorece o scrap-and-re-build por patch-and-extend. Uma parte essencial do hacking é implacavelmente jogar fora o código que se tornou supercomplicado ou crufty, não importa quanto tempo você investiu nele.

O estilo de hacking tem sido intimamente associado com a tradição técnica do sistema operacional Unix [3]

Recentemente, tornou-se evidente que o hacking combina bem com o estilo “ programação ágil ” . Técnicas ágeis como programação em pares e histórias de recursos se adaptam prontamente ao hacking e vice-versa. Em parte, isso ocorre porque os primeiros líderes de pensamento da agile foram influenciados pela comunidade de código aberto. Mas, desde então, também houve tráfego na direção contrária, com projetos de código aberto adotando cada vez mais técnicas como o desenvolvimento orientado a testes.

Estágios de Aprendizagem Como Hackear
Aprender a compor música tem três etapas. Primeiro, você tem que aprender a técnica mecânica básica de um instrumento - dedilhado e como tocar escalas. Então você tem que treinar seu ouvido para entender os padrões musicais. Finalmente, você deve aprender a recombinar padrões musicais em criações originais. Hacking é semelhante.

O equivalente hacker do fingering é aprender os recursos das linguagens de programação e a mecânica de usar ferramentas como editores, intérpretes e compiladores. (Se você não entender esses termos, consulte O HOWTO dos Fundamentos do Unix e da Internet .) Não abordaremos esses mecanismos aqui, pois eles variam muito de acordo com a linguagem que você está usando. Tutoriais para todos os idiomas que você pode querer usar estão disponíveis na Web; use um mecanismo de pesquisa.

O equivalente a jogar escalas é escrever pequenos programas, sozinho. Infelizmente, tocar escalas (a) não ensina nada sobre música e (b) é muito chato. Da mesma forma, escrever programas de brinquedo não tende a ensinar muito sobre hacking, e (b) tende a desmotivá-lo, a menos que o programa resolva imediatamente um problema do qual você se importa.

A maioria das instruções de programação formal começa a tocar escalas e paradas. Assim, ele tende a produzir codificadores que são pobres em colaborar uns com os outros e têm o equivalente a nenhum ouvido para música - uma sensação ruim de design e arquitetura de software.

O ciclo de invasão incremental
Existe uma maneira melhor de aprender. Eu chamo de ciclo incremental de hacking.

Primeiro, escolha um programa que faça algo de seu interesse. O ideal é que seja um programa que você use regularmente e tenha opiniões sobre ele. A próxima melhor coisa é um programa que você normalmente não usa, mas que faz algo que você acha interessante. Para que esse método de aprendizado funcione, você deve evitar tentar invadir códigos que o entediam.

O programa que você escolhe não precisa fazer nada sério. Muitos programadores aprimoraram suas habilidades aprimorando os jogos de que gostavam. A única desvantagem disso é que os jogos modernos costumam ser bem grandes e complicados, e podem estar além do alcance de um iniciante cru. Por esse motivo, você pode querer investigar um dos jogos clássicos orientados por texto que ainda sobrevivem; O nethack é um excelente exemplo e existem muitos outros.

Se você ainda não conhece o programa, saiba como usá-lo. Leia a documentação. Desenvolva um modelo mental de como isso funciona.

Escolha um pequeno recurso para alterar ou adicionar.

Pesquise o código até encontrar a peça que você precisa modificar.

Nota: você especificamente não deve tentar ler o programa inteiro. Você só vai exaurir e se frustrar se fizer isso. Em vez disso, use a estrutura do módulo do código para zerar apenas a parte que você precisa entender. Ao longo do caminho, você aprenderá coisas sobre como todo o programa se encaixa.

É um bom exercício adicionar comentários explicativos e notas ao código enquanto você descobre coisas sobre ele. Isso ajudará sua memória e também ajudará a organizar seus pensamentos.

Faça, teste, depure e documente sua alteração.

Documentar sua mudança é importante. Se você desenvolver o hábito de fazer isso cedo, produzirá um trabalho de qualidade muito superior.

Envie sua alteração como um patch para os mantenedores do programa. Veja o HOWTO de Práticas de Liberação de Software para obter dicas sobre como fazer isso de uma maneira eficiente e educada.

Eu descrevi originalmente isso como um passo opcional; Um amigo sábio apontou que provavelmente eu não deveria ter. Macarrão solitário no seu instrumento é muito bom para a prática, mas a música é completada e validada quando a criatividade é ouvida por outras pessoas. Macarrão solitário no seu computador é igualmente bom para a prática, mas o hacking é concluído quando outras pessoas usam o que você escreveu . Esse teste do mundo real é importante.

Às vezes (mais frequentemente quando você está apenas começando) seus patches serão rejeitados. Você precisa aprender a lidar com isso. Isso não significa que você está fadado a falhar em sua busca; geralmente o que isso significa é que você não leu o código cuidadosamente o suficiente, ou (como normalmente) você perdeu algo importante sobre a cultura e as práticas do grupo de desenvolvimento para o qual você está tentando contribuir. Esses erros podem ser reparados.

Agora, pergunte a si mesmo: entendo esse programa inteiro?

Se sim, está feito. Se não, volte para o passo 3. Desta vez, escolha uma coisa diferente e talvez um pouco mais difícil de alterar.

O objetivo deste exercício é aprender como desvendar o problema de entender um programa, em vez de tentar lidar com toda a complexidade de uma só vez. Conforme você passa por esse loop várias vezes, você irá gradualmente desenvolver uma representação mais completa em sua mente da maneira como o programa inteiro se encaixa. Em algum momento, você alcançará um limiar onde você entende tudo - ou de qualquer maneira, o suficiente para qualquer que seja seu propósito final.

Desenvolvendo seu senso de design
Para treinar a si mesmo, comece pequeno. Se possível, primeiro faça o ciclo incremental de hacking como um exercício em programas ou scripts muito pequenos, de 10 a 50 linhas. Estes podem ser difíceis de encontrar, como a maioria dos programas de qualquer uso são maiores do que isso. A maioria dos programas pequenos são scripts em shell, Perl, Python ou Tcl; essa é uma característica a ser procurada ao vasculhar a Web para eles.

Quando você tiver feito o ciclo de hacking incremental em vários programas muito pequenos (ou se tiver o azar de não encontrar nenhum muito pequeno), experimente-o em programas ligeiramente maiores. Procure codebases no intervalo de 100 a 500 linhas.

Quando você dominar esse nível, vá para a ordem de grandeza, 1.000 a 5000 linhas. No momento em que você domina o nível 1K-5K, você terá entrado na extremidade inferior do intervalo de capacidade do que normalmente é considerado um programador qualificado.

Em ou antes do nível 1K-5K, você deve ocasionalmente começar a perceber que está tendo coceira para alterar a estrutura ou a organização de um programa, não apenas seus recursos. Você pode se achar pensando “ Esse código é feio ” e ter sentimentos sobre torná-lo mais bonito e limpo.

Quando isso acontecer, preste atenção . Este é o seu senso de design tentando acordar. Não se apresse em consertar outro recurso. Em vez disso, comece a explorar o programa que lhe dá essa coceira em um nível mais alto. Agora pode ser uma boa hora para tentar ler todo o código, mas não fique muito preocupado se não puder; a maioria dos programas é grande demais e confusa para engolir tudo de uma vez para o trabalho. Apenas tente entender o que você precisa saber para limpar as coisas.

Você está agora entrando na parte intermediária de aprendizado para hackear. Isso envolve não apenas alterar os recursos de superfície visível, mas fazer o que é chamado de " refatoração " - reorganizando o código internamente para que fique mais limpo e com melhor arquitetura (melhor ocultação de dados, interfaces mais estreitas entre diferentes partes, separação mais funcional entre módulos).

Uma vez que seu senso de design (o equivalente ao ouvido musical) é ativado, muitas vezes você vai descobrir que você começa a refatorar cada programa em que você trabalha tão rapidamente quanto a terceira ou quarta vez em torno do ciclo incremental de hacking.

Na verdade, é exatamente assim que hackers habilidosos normalmente abordam o aprendizado do código de grandes programas - consertando, refatorando e reescrevendo até que eles criem o que está acontecendo. Você faz pequenas mudanças para aprender como fazer grandes.

Se você refatorar com sucesso três ou quatro sistemas grandes, você não apenas desenvolverá fortes habilidades de programação, mas também estará a caminho de algo muito mais raro e poderoso: tornar-se um arquiteto de software, alguém que possa projetar originalmente grandes sistemas de software.

Essa é a única maneira que conheço para arquitetos de software novatos em treinar seu senso de design. Pode ser o único caminho que existe.

Sendo original
Em minha analogia com a música, eu disse que você eventualmente precisa aprender a recombinar padrões musicais (que você aprendeu ouvindo música e praticando performance) em composições originais. Eu escolhi essa maneira de descrever a criatividade com cuidado, porque se aplica ao software mais do que à música.

Antes de você ter lido e absorvido as lições de um monte de código, você provavelmente não terá em mente a biblioteca de padrões que precisa ser criativa em escalas maiores do que as muito pequenas. Um dos propósitos de fazer o ciclo incremental de hacking é mergulhar em muitos códigos - em escalas de complexidade crescentes - sob circunstâncias que proporcionam motivação para continuar lendo.

Eventualmente, você liderará projetos em grupo e fará um trabalho totalmente original. Não sinta que você precisa apressar isso ou forçá-lo; Se você dedicar tempo às suas habilidades para amadurecer, sua primeira composição original será melhor para ela. Ao contribuir efetivamente para projetos de código aberto existentes, você aprenderá as habilidades (incluindo as habilidades de comunicação) necessárias para executar seus próprios projetos.


[1] É certamente possível hackear outras coisas além de software, e as pessoas na cultura maker fazem isso. Mas o termo “ hacking ” se originou entre pessoas que mexeram com software e ainda se irradiam a partir daí. Além disso, o autor não está realmente qualificado para escrever sobre aprender outros tipos.

[2] Antigamente, as pessoas hackeiam em código fechado, quando podiam, porque não havia alternativa. As coisas mudaram para melhor.

[3] Antes de 1983, a associação entre hacking e Unix era menos forte, mas os detalhes de como isso mudou agora são principalmente relevantes apenas para os historiadores.
