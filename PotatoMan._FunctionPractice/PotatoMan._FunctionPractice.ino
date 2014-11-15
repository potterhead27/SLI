void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
 Serial.println("Should be 6:");
 Serial.println(add(4,2));
 delay(2000);
 Serial.println("Should be 49");
 Serial.println(multiply(4,7));
 delay(2000);
 Serial.println("Should be 10");
 Serial.println(divide(100,10)); 
 delay(2000);
 Serial.println("If you favorite number is not 7, should be not my favorite");
 Serial.println(bestNumber(7));
 delay(2000);
  
}

//write a function that adds two numbers and returns the sum
int add(int x, int y){
  int sum;
  sum = x + y;
  return sum; 
  
}

//write a function that multiplies two integers and returns the total
int multiply(int c, int b){
  int product;
  product = c * b;
  return product; 
  
}

//write a function that divides the first parameter by the second
int divide(int e, int r){
  int quotient; 
  quotient = e / r;
  return quotient;
  .0            
}

//write a funtion that returns the string "Best number" if
// the number from the parameter matches your favorite number
String bestNumber(int myFavorite){
  
  String response;
  //complete the if statement
  if(myFavorite == 7){
    response = "This number is boss.";
  }
  else{
    response = "Nope.";
  }
  return response;
}

//chatbot
String PotatoMan(String message); 

   String response; 
   
   if(message == "Good morning!")
      response = "I don't like you. Go away."; 
}
   else if(message == "How are you?");
      response = "Terrible. Didn't I tell you to go away?";
}
  else if(message == "Good afternoon!");
      response = "It was a good afternoon. Then you came.";  
} 
  else if(message == "What book are you reading?");
      response = "How To Get Away With Murder for Dummies.";
} 
 else if(message == "Are you hungry?");
      response = "You're stupider than I thought... I'M ALWAYS HUNGRY! Go get me some Nutella.";
  
   


