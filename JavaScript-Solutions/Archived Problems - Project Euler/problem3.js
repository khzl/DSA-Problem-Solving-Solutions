/* 
* Finds the largest prime factor of the number 600851475143.
 *
 * It uses the BigInt type for accurate handling of large numbers.
 * The algorithm iteratively divides the number by the smallest possible factor
 * until the number is reduced to 1. The last factor successfully used is the largest prime factor.
 *
*/

function FindLargestPrimeFactor(){
    let number = 600851475143n; 
    let largestFactor = 1n;
    let currentFactor = 2n;

    const initialNumber = number;

    while( number > 1n){
        if ( number % currentFactor === 0n){
            largestFactor = currentFactor;
            number /= currentFactor;
        }
        else{
            currentFactor++;
        }
    }
    console.log(`The Largest Prime Factor of ${initialNumber} is: ${largestFactor.toString()}`);
    return largestFactor;
}

FindLargestPrimeFactor();