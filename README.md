# Horse-Race
Advance ()
 #include <random>
std::random_device rd;
std::uniform_int_distribution<int> dist(0, 1);

coin = dist(rd);
if coin == 1
 advance horse

printLane()
int horses = {0,1,2,3,4,5}
for i in range 16
if i == horse position:
print horsenum
else:
print (". ")

isWinner()
if horse postion == 16 
return true;
else:
false
 
Main ()
make array {0,0,0,0,0}
bool type keep going set true
while keep going 
for i in range 5
advance (i, horses);
printLane(i, horses);
if (isWinner(i, horses)){
print horse i won;}
print Enter for Next Turn
grab input

return(0)

void advance(int horseNum, int* horses);
 void printLane(int horseNum, int* horses);
 bool isWinner(int horseNum, int* horses);
