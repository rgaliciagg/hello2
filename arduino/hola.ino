void setup() {
   Serial.begin(9600);//Inicializamos el puerto serie como salida para poder ver mensajes en el monitor del mencionado puerto serie a 9600 baudios
}
void loop() {
  Serial.print("¡Hola Mundo!.\n");//Mostramos el mensaje "¡Hola mundo!"
  delay(1000);//Pausamos la ejecución durante 1 segundo
}