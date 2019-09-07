<?php
/*
CHALLENGE:

The prime factors of 13195 are 5, 7, 13 and 29.

What is the largest prime factor of the number 600851475143 ?
*/
//Taken from: https://projecteuler.net/problem=3
//Date: August 12, 2019


 
function next_prime(int $last_number){
    $prime_factors_array = [2];
    do{
        $last_number++;
        foreach($prime_factors_array as $some_prime){
            if($last_number % $some_prime == 0  or $last_number == 0){
                continue;
            }
            if($some_prime == $prime_factors_array[sizeof($prime_factors_array) - 1] and $last_number != 1){
                array_push($prime_factors_array, $last_number);
            }
        }
    }while($prime_factors_array[sizeof($prime_factors_array) - 1] != $last_number);
    
    return $last_number;
}   

function canonical_decomposition(int $number_to_descompose){
    $last_prime = 2;
    do{
      
        if($number_to_descompose % $last_prime == 0){
            $number_to_descompose /= $last_prime;
            continue;    
        }else if($number_to_descompose % $last_prime != 0 and $number_to_descompose !=1){ 
            $last_prime = next_prime($last_prime);

        }
       
    }while($number_to_descompose != 1);
    return $last_prime;
}

echo canonical_decomposition(600851475143),  PHP_EOL;


?>