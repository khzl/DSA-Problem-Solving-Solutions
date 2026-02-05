/* 
Problem 2 : Calculates The Sum Of The Even-Valued Term In The Fibonacci Sequence
Whose Valued Do Not Exceed Four Million 4000000
return number The Sum Of Even Fibonacci Numbers
*/

function evenFibonacciNumbers(){
    let FirstTerm = 1;
    let SecondTerm = 2;
    let EvenSum = 0;
    const MaxLimit = 4000000;

    while(SecondTerm <= MaxLimit){
        if (SecondTerm % 2 === 0){
            EvenSum += SecondTerm;
        }
        const NextTerm = FirstTerm + SecondTerm;
        FirstTerm = SecondTerm;
        SecondTerm = NextTerm;
    }
    console.log("The Sum Of The Even-Valued Term In The Fibonacci Sequence Whose Valued Do Not Exceed Four Million is :" + " " + EvenSum);
    return EvenSum;
}

evenFibonacciNumbers();