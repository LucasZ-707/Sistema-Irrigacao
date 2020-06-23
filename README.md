# Irrigação de plantas utilizando arduino Uno R3

Projeto com o objetivo de criar um sistema de irrigação automatizado com arduino de baixo custo, que identifica a umidade do solo e opera uma bomba d'agua dependendo desse nivel de umidade. Podendo ainda ativar a bomba d'agua de forma manual ao pressionar um botão(push button).
O projeto também apresenta um indicador de umidade sendo apresentado por Leds, quando a planta esta úmida apenas um ou os dois leds verdes ficam ativos, quando a umidade esta mediana, os leds verdes e um ou os dois leds amarelos são ativados, e quando a umidade fica num nivel crítico, todos os leds verdes e amarelos são ativado juntamente com um ou dois leds vermelhos, mas o código nunca deixa isso acontecer, já que a bomba d'agua acaba sendo ativada automaticamente quando a umidade esta crítica.

## Componentes:

jumpers femea-femea = 2x ;  
jumpers macho-macho = 20x ; 
jumpers macho-femea = 3x ;  
resistor 330R = 6x ;  
resistor 10K = 1x ; 
protoboard 400 ou 800 pinos = 1x ;  
arduino Uno R3 = 1x ; 

## Atuadores:

led Verde 3mm = 2x ;  
led Amarelo 3mm = 2x ;  
led Vermelho 3mm = 2x ; 
bomba d'agua JT100 = 1x ; 

## Sensores:

Sensor de umidade do solo FC-28 = 1x ;  
pushbutton = 1x ; 


**Obs: As duas imagens do projeto em protoboards tem os mesmos componentes, mas um foi feito utilizando uma protoboard de 400 pinos e o outro utilizando uma de 800 pinos;**
