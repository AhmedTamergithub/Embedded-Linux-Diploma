    #include<iostream>
    using namespace std;
    int main() {
   int asci_number=0;
   for(int i=33;i<128;i++){
      char c=(char) asci_number+i;
    cout << "Character : " << c << " is of equaivalent ascii number= " <<asci_number+i  << endl;
   }
   return 0;
     }