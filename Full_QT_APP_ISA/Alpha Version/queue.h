/*
 * ----------------------------------------------------
 *
 *  this queue is designed to hold n elements
 *  it pops and returns the last element automatically if
 *  you push more than n elements.
 *
 *  you can use the pop function any time.
 *
 *  you can use the clean function to empty the queue
 *
 *  debug function is useless in QT (but used in terminal app)
 *
 * ----------------------------------------------------
 */

template<typename T , int size>
class queue{

    T arr[size]= {0};
    int num;



 public:

    queue(): num(-1){}

    T push(T x){
        if(num < size-1){
            num+=1;
            arr[num]= x;
        }
        else{
            T y= pop();
            num+=1;
            arr[num]= x;

            return y;
        }

        return nullptr;
    }

    T pop(){
        if(num>-1){ // to prevent underflow
            T x= arr[0];
            for(int i =0; i<size-1; i++){
                arr[i]=  arr[i+1];
            }
            num-=1;
            return x;
        }
        else{
            return nullptr;
        }
    }

    T peak(){
        return arr[0];
    }


    bool isfull(){
        return (num == (size-1));
    }

    void clean(){
        for(int i =0; i<size; i++){
            arr[i]= 0;
        }
        num=-1;
    }

    /*
    void debug(){
        cout<<arr[0];
        cout<<arr[1];
        cout<<arr[2];
        cout<<"\n";
    }*/

};
