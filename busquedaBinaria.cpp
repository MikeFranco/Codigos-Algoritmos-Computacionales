#include <iostream>

using namespace std;

int main()
{
	
    int arrayLength, number_to_found, start=0;
    cout<<"¿Cuantos numeros quieres ingresar?: "; cin>>arrayLength;
	cout<<"¿Que numero quieres encontrar?: "; cin>>number_to_found;
    int end = arrayLength-1;
    int pivot = (start + end)/2;
    int numbers[arrayLength];
    
    for(int i=0; i<arrayLength; i++)
	{
		int number;
		cout<<"Captura el numero para la posicion: "<<i+1<<" "; cin>>number;
    	numbers[i] = number;
	}
    while(start <= end){
    	
    	if(numbers[pivot] < number_to_found)
    		start = pivot+1;
		else if(numbers[pivot] == number_to_found){
			cout<<"Se encontro en la posicion: "<<pivot + 1;
			break;
		}else
			end = pivot - 1;
		pivot = (start + end)/2;
	}
	if(start > end) cout<<"No se encontro el numero";
		
}
