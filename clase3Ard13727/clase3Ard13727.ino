// C++ code
//
//variable para almacenar nombre y discurso
char nombre = 'eduardo';
unsigned char discurso;
String nombre2 = "Hola soy el asesor de arduino";
//declarar una variable precisa y edad
float distancia = 9545.1575;
int edad = 33;
//respuesta dicotomica y el valor de 1000 bitcoins entero
bool respuesta = false;
long bitcoin = 14551535154553545;

void setup()
{
  Serial.begin(9600);
    Serial.print("Hola que tal");
  
    Serial.println(nombre);
  Serial.println(nombre2);
  Serial.println(distancia);
  Serial.println(edad);
  Serial.println(respuesta);
  Serial.println(bitcoin);
}

void loop()
{
  Serial.println("Aqui voy!!!");
  long aleatoria = random(3);
    Serial.println(aleatoria);
    delay(500);
    
}
