#include <stdlib.h>
#include <math.h>
#include <stdio.h>
int main(){
 int nHeight, nSubsidy, nSubsidyPrev;
 for(nHeight=1100000;nHeight<1250000;nHeight++){
  nSubsidy = floor( 19697202017 / (floor(nHeight/100000)*100000) );
  if(nSubsidy!=nSubsidyPrev){
   printf("block: %d reward: %d\n", nHeight, nSubsidy);
   nSubsidyPrev=nSubsidy;
  }
 }
 for(nHeight=1250000;nHeight<2147483647;nHeight++){
  nSubsidy = floor( floor(0.29531*19697202017) / (floor(nHeight/100000)*100000) );
  if(nSubsidy!=nSubsidyPrev){
   printf("block: %d reward: %d\n", nHeight, nSubsidy);
   nSubsidyPrev=nSubsidy;
  }
 }
}


