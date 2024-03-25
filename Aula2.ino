//https://wokwi.com/projects/393253781135437825
// Código para fazer um led acender quando pressionar um botão, fazer outro led piscar quando pressionar um outro botão, e fazer os 2 leds apagarem quando pressionar os dois botões


int botao1 = 8;
int botao2 = 7;
int led1 = 13;
int led2 = 12;

void setup() {
Serial.begin(9600);
pinMode(botao1, INPUT_PULLUP);
pinMode(botao2, INPUT_PULLUP);
pinMode(led1, OUTPUT);
pinMode(led2, OUTPUT);

}

void loop() {


while (digitalRead(botao1)==LOW||digitalRead(botao2)==LOW){
  if (!(digitalRead(botao1)==LOW&&digitalRead(botao2)==LOW)){
    if (digitalRead(botao1)==LOW){
      digitalWrite(led1, HIGH);
    }
    if (digitalRead(botao2)==LOW){
      digitalWrite(led2, HIGH);
      delay(100);
      digitalWrite(led2,LOW);
      delay(100);
    }
    }
}
digitalWrite(led1, LOW);
}

