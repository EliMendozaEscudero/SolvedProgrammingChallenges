<?php
/*
CHALENGHE:
If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. The sum
of these multiples is 23.

Find the sum of all the multiples of 3 or 5 below 1000.
*/ 
//Taken from: https://projecteuler.net/problem=1
//Date: July 26, 2019


$divisibility = function(int $quotient,int $divisor) {
    if (($quotient % $divisor) ==  0){
        return true;
    }else{
        return false;
    }
};

$sum = 0;
for($i=0;$i<1000;$i++){
   if($divisibility($i,(int) 3) or $divisibility($i,5)){
        $sum += $i;
    }
    
}

echo $sum, PHP_EOL;
?>