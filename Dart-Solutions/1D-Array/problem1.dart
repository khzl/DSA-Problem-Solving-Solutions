void main(){
  String Name = 'Developer';

  printGreeting(Name);

  for (int i = 1; i <= 3; i++){
    print('Dart Count: $i');
  }
}

void printGreeting(String user){
  print('Hello, $user! Welcome To Dart programming!');
}