#include<bits/stdc++.h>
using namespace std;
const int r=4,c=4; //aray size gloabally declared 


//efficient approach--transpose of a matrix --->o(n*2) time
void transpose_diagonalfixed(int mat[][c]){
    for(int i = 0; i < c; i++)
		for(int j = i + 1; j < c; j++)
			swap(mat[i][j], mat[j][i]);

}


//rotate_matrix= make transpose of given matrix & reverse individual row 
//time o(n2) ; space=o(1)
void rotate_matrixby90(int ar[][c]){

	for(int i = 0; i < c; i++)
		for(int j = i + 1; j < c; j++)
			swap(ar[i][j], ar[j][i]);

	for(int i=0;i<c;i++){
		int l=0,h=c-1;
		while(l<h){
			swap(ar[l][i],ar[h][i]);
			l++;
			h--;
		}
	}
}

void spiral_matrix(int ar[r][c]){
	int top=0,right=c-1,bottom=r-1,left=0;
	while(top<=bottom and right>=left){

		for(int i=left;i<=right;i++){  //top row 
			cout<<ar[top][i]<<" ";
		}
		top++;

		for(int i=top;i<=bottom;i++){
			cout<<ar[i][right]<<" ";
		}
		right--;

		if(top<=bottom){
		for(int i=right;i>=left;i--){
			cout<<ar[bottom][i]<<" ";
		}
		bottom--;
		}

		if(right>=left){
		for(int i=bottom;i>=top;i--){
			cout<<ar[i][left]<<" ";
		}
		left++;
	}
}


}



void print(int ar[r][c]){
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			cout<<ar[i][j]<<" ";
		}
		cout<<endl;

	}
}


int main(){

	int ar[r][c];
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			cin>>ar[i][j];
		}
	}

	/*for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			cout<<ar[i][j]<<" ";
		}
		cout<<endl;

	}
	*/
	print(ar);
	cout<<endl;


	spiral_matrix(ar);
	print(ar);






	

}
#include<bits/stdc++.h>
using namespace std;
const int r=4,c=4; //aray size gloabally declared 

void spiral_matrix(int ar[r][c]){
	int top=0,right=c-1,bottom=r-1,left=0;
	while(top<=bottom and right>=left){

		for(int i=left;i<=right;i++){  //top row 
			cout<<ar[top][i]<<" ";
		}
		top++;

		for(int i=top;i<=bottom;i++){
			cout<<ar[i][right]<<" ";
		}
		right--;

		if(top<=bottom){
		for(int i=right;i>=left;i--){
			cout<<ar[bottom][i]<<" ";
		}
		bottom--;
		}

		if(right>=left){
		for(int i=bottom;i>=top;i--){
			cout<<ar[i][left]<<" ";
		}
		left++;
	}
}


}



void print(int ar[r][c]){
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			cout<<ar[i][j]<<" ";
		}
		cout<<endl;

	}
}


int main(){

	int ar[r][c];
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			cin>>ar[i][j];
		}
	}

	/*for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			cout<<ar[i][j]<<" ";
		}
		cout<<endl;

	}
	*/
	print(ar);
	cout<<endl;


	spiral_matrix(ar);
	print(ar);




}
