int pin = A0; 

void setup() {
    pinMode(pin, INPUT);
}

void loop() 
{
    
    int check_light = analogRead(pin); 
    int light = 1; 
    
    if(check_light > light ) Particle.publish("day", "1", PRIVATE);
    if(check_light < light ) Particle.publish("day", "0", PRIVATE); 
    
    delay(10s); 

}