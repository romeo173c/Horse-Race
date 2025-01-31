#include <random>
#include <iostream>

void advance(int horseNum, int* horses);
void printLane(int horseNum, int* horses);
 bool isWinner(int horseNum, int* horses);

 int main(){

    int horses[] = {0,0,0,0,0};
    bool keepGoing = true;

    while (keepGoing){
        for (int i = 0; i < 5; i++){
	advance(i, horses);
	printLane(i, horses); 
        if(isWinner(i,horses)){ 
		std::cout << "Horse " << i << " wins"<< std::endl ;
                keepGoing = false;

	
	}	
	}
    	std::cout << "Please enter for another turn";
	std::cin.get();
    
    }
 
    return 0;	 
 }

void printLane(int horseNum,int*  horses){
    
    for (int i = 0; i < 16; i++){ 
	    if (i == *(horses + horseNum)){
	        std::cout << horseNum << " ";
	    }else{
		    std::cout << ". ";
	    }
     }

     std::cout << std::endl;
}


void advance(int horseNum,int* horses){

   std::random_device rd;
   std::uniform_int_distribution<int> dist(0, 1);
   int coin = dist(rd);

  if (coin == 1){
      *(horses + horseNum) += 1;
  }

}

bool isWinner(int horseNum, int* horses){
    if (*(horses + horseNum) == 16){
        return true;
    }else{
    return false;	    
   }
}
