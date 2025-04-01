
A comunicação entre dispositivos é um dos pilares da automação industrial moderna. 
Protocolos como Modbus, Profibus ou Ethernet/IP permitem que sensores, atuadores, PLCs e sistemas SCADA troquem informações em tempo real. 
Nesta tarefa, será simulado um sistema mestre-escravo baseado em comunicação serial, permitindo compreender os princípios base destes protocolos.

Simulação de Comunicação Mestre-Escravo

Objetivo
Compreender como funciona a comunicação entre dois dispositivos em automação industrial (por exemplo, um PLC e um sensor), através da simulação de um protocolo de comunicação simples, como Modbus ou protocolo próprio simulado.

Ferramentas Utilizadas
Tinkercad Circuits (simulador online de eletrónica e Arduino)

Tinkercad (Google ou registo rápido) | www.tinkercad.com/things/jmRAIYsecH1/editel

1) Criar um circuito com dois Arduinos no Tinkercad:
 - Um será o “mestre” (ex: PLC).
 - Outro será o “escravo” (ex: sensor inteligente).

2) Estabelecer comunicação serial:
 - O mestre envia um pedido de leitura.
 - O escravo responde com um valor (por exemplo, temperatura simulada ou estado de um botão).

3) Visualizar a comunicação na consola serial:
Visualizar como os dados são trocados.

4) Colocar o código escravo e mestre
   
6) Iniciar a simulação e abrir o Monitor Serial para observar a troca de mensagens.
   
8) Reflexões Finais
 - Que tipo de arquitetura está a ser simulada nesta atividade?
 - Qual o papel do comando "LER_VALOR" no contexto da automação?
 - Em que situações reais industriais encontramos este tipo de troca de mensagens?
 - Quais seriam as limitações desta simulação face a um protocolo real como o Modbus?
 - Que vantagens oferece o modelo mestre-escravo em ambientes industriais?
