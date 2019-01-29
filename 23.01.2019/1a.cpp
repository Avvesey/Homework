#include <iostream>
using namespace std;
class double_vector{
    unsigned int size, n, capasity ;
int k;
int data;
 NODE*head;
public:
    double_vector(){
     int A[1]={0};     // (i)
      }


       double_vector(unsigned int size){ //(ii)
       int *B = new int[size] ={0};
      }


         ~double_vector(){  // (iii)
           delete[] A;
      }


           double_vector(const double_vector& A): // (iv)

             k(A.k) {}



              const double_vector& operator=(const double_vector& A){   // (v)
               A[1]=1;
         }






         double operator[] (unsigned int n){   // ( vi)

         }

            void push_back(double x){    // (vii)
            NODE* temp = new NODE;
            temp -> data=x;
            temp -> next =head;
            head=temp;
            }

              int double pop_back(){     // (viii)
                  if (head==null){
                    cout << "fall";
                  }
                    int X = head ->data;
                    NODE*temp->head;
                    head= head-> next;
                    delete temp;
                    return X;
                    .
            }
            
            
            unsigned int size(){   // (ix)
            return B.end();
            }
            
            unsigned int capacity(){    //)(x)
            B.size = capacity;
            return capacity;
            }



};



int main() {



return 0;
}
