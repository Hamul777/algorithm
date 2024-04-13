import 'dart:io';
import 'dart:math';

void main(){
  Random random = Random();
  String? roll = stdin.readLineSync();
  List<int> coinCount = List<int>.filled(int.parse(roll!),0); 

  for (int i = 0; i < int.parse(roll); i++){
    coinCount[i] = random.nextInt(2);
  }
  print(coinCount.join(""));
}