///////////////////////////// (1)


#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}

///////////////////////////// (2)


#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}


///////////////////////////// (3)

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= i; j++) {
            cout << j;
        }
        cout << endl;
    }

    return 0;
}



///////////////////////////// (4)

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= i; j++) {
            cout << i;
        }
        cout << endl;
    }

    return 0;
}



///////////////////////////// (5)

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n-i; j++) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}


///////////////////////////// (6)


#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n-i+1; j++) {
            cout << j;
        }
        cout << endl;
    }

    return 0;
}



///////////////////////////// (7)

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n-i-1; j++) {
            cout << " ";
        }
        for(int j = 0; j< 2*i + 1;j++){
        cout << "*";
        
    }
    cout<< endl;
    }

    return 0;
}


///////////////////////////// (8)

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= i -1  ; j++) {
            cout << " ";
        }
        for(int j = 0; j< 2*n -(2*i -1);j++){
        cout << "*";
        
    }
    cout<< endl;
    }

    return 0;
}


///////////////////////////// (9)

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n-i-1; j++) {
            cout << " ";
        }
        for(int j = 0; j< 2*i + 1;j++){
        cout << "*";
        
    }
    cout<< endl;
    }

    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= i -1  ; j++) {
            cout << " ";
        }
        for(int j = 0; j< 2*n -(2*i -1);j++){
        cout << "*";
        
    }
    cout<< endl;
    }

    return 0;
}


///////////////////////////// (10)


#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

      for(int i = 0; i < n; i++) {
        for(int j = 0; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }
    
     for(int i = 0; i < n-1; i++) {
        for(int j = 0; j < n-i-1; j++) {
            cout << "*";
        }
        cout << endl;
    }
    

    return 0;
}


///////////////////////////// (11)



#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    for(int i = 1; i <= n; i++) {
    	int start = 1 ;
    	if(i%2==0) start =0;
        for(int j = 1; j <= i; j++) {
            cout << start;
            start = 1 - start; // start = !start;
            
        }
        cout << endl;
    }
    
     
    

    return 0;
}



///////////////////////////// (12)

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    
   	 for(int i = 1;i<=n;i++){
            for(int j = 1;j<=i;j++){
                cout<<j;
                
            }
            for(int j = 1;j<=2*(n-i);j++){
                cout<<" ";
            }
            for(int j=i;j>=1;j--){
                cout<<j;
            }
            cout<<endl;
        }

      
    return 0;
}

///////////////////////////// (13)

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    
   	int num = 1;
         for(int i = 1;i<=n;i++){
            for(int j = 1;j<=i;j++){
                cout<<num<<" ";
                num = num+1;
            }
            cout<<endl;
         }

      
    return 0;
}

///////////////////////////// (14)

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    
   		for(int i = 0;i<n;i++){
            for(char ch='A';ch<='A' + i;ch++){
                cout<<ch;
            }
            cout<<endl;
        }

      
    return 0;
}


///////////////////////////// (15)

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    
   		for(int i = 1;i<=n;i++){
            for(char ch='A';ch<='A' + (n-i);ch++){
                cout<<ch;
            }
            cout<<endl;
        }

      
    return 0;
}

///////////////////////////// (16)

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    
   		for(int i = 0;i<n;i++){
   			char ch = 'A' + i;
            for(int j=0;j<=i;j++){
                cout<<ch;
            }
            cout<<endl;
        }

      
    return 0;
}


///////////////////////////// (17)

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    
   		for(int i = 1; i <= n; i++) {
        	for(int j = 1; j <= n-i; j++) {
            cout << " ";
       		 }
       		char ch = 'A';
       		for(int j = 1; j<=2*i -1;j++){
       			cout << ch;
       			if(j<i)ch = ch + 1;
       			else ch = ch -1;
       			
       		}
       		
       		cout << endl;
       		
       	}
       

      
    return 0;
}



///////////////////////////// (18)

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    
   		for(int i = 1; i <= n; i++) {
   			char ch = 'A' + (n-i);
   			for(char j = ch;j<=ch + (i-1);j++){
   				cout << j<<" "  ;		
   			}
   			cout << endl;
   		}
      
    return 0;
}



///////////////////////////// (19)

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    
   		for(int i=0;i<n;i++){
   			for(int j=0;j<n-i;j++){
   				cout << "*";
   			}
   			
   			for(int j=1;j<=2*i;j++){
   				cout << " ";
   			}
   			
   			for(int j=0;j<n-i;j++){
   				cout << "*";
   			}
   			cout << endl;
   			/////			
   		}
   		for(int i=1;i<=n;i++){
   			for(int j=1;j<=i;j++){
   				cout << "*";
   			}
   			
   			for(int j=1;j<=2*(n-i);j++){
   				cout << " ";
   			}
   			
   			for(int j=1;j<=i;j++){
   				cout << "*";
   			}
   			cout << endl;
   						
   		}
   		
      
    return 0;
}

///////////////////////////// (20)

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    
   		
   		for(int i=1;i<=n;i++){
   			for(int j=1;j<=i;j++){
   				cout << "*";
   			}
   			
   			for(int j=1;j<=2*(n-i);j++){
   				cout << " ";
   			}
   			
   			for(int j=1;j<=i;j++){
   				cout << "*";
   			}
   			cout << endl;
   						
   		}
   		//////
   		for(int i=1;i<=n-1;i++){
   			for(int j=1;j<=n-i;j++){
   				cout << "*";
   			}
   			for(int j=1;j<=2*i;j++){
   				cout << " ";
   			}
   			for(int j=1;j<=n-i;j++){
   				cout << "*";
   		}
   		cout << endl;
   		}
   		
      
    return 0;
}

///////////////////////////// (21)

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    
   		
   		for(int i=1;i<=n;i++){
   			if(i==n || i ==1){
   				for(int j =1;j<=n;j++){
   					cout << "*";
   				}
   			}
   			
   			else {
   				cout << "*";
   				for(int j=1;j<=n-2;j++){  					
   						cout << " ";
   				}
   				cout << "*";
   			}
   			cout << endl;
   		}
	
      
    return 0;
}


///////////////////////////// (22)

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    
   	for (int i=0; i<2*n - 1;i++){
   		for (int j=0;j<2*n - 1;j++){
   			int top = i;
            int left = j;
            int right = (2*n - 2) - j;
            int bottom = (2*n - 2) - i;
    cout << (n - min(min(top, bottom), min(left, right)));
    		if (j < 2 * n - 2) cout << " ";
   			}
   			cout << endl;
   		}
	
      
    return 0;
}

//////////// [ALL 22 PATTERNS DONE] ////////////










