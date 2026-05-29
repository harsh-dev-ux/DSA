###########


#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++) {
            cout << "*";
        }
        cout << " \n";
    }

    return 0;
}

############


#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << " \n";
    }

    return 0;
}


##########

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= i; j++) {
            cout << j;
        }
        cout << " \n";
    }

    return 0;
}



########

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= i; j++) {
            cout << i;
        }
        cout << " \n";
    }

    return 0;
}




############

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n-i; j++) {
            cout << "*";
        }
        cout << " \n";
    }

    return 0;
}


##########


#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n-i+1; j++) {
            cout << j;
        }
        cout << " \n";
    }

    return 0;
}



##########

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
    cout<< "\n";
    }

    return 0;
}


###########

#include <bits/stdc++.h>
#include<bits/stdc++.h>
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
    cout<< "\n";
    }

    return 0;
}


############


#include <bits/stdc++.h>
#include<bits/stdc++.h>
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
    cout<< "\n";
    }

    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= i -1  ; j++) {
            cout << " ";
        }
        for(int j = 0; j< 2*n -(2*i -1);j++){
        cout << "*";
        
    }
    cout<< "\n";
    }

    return 0;
}


############


#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    for(int i = 1; i < n; i++) {
        for(int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << "\n";
    }
    
     for(int i = 0; i < n; i++) {
        for(int j = 0; j < n-i; j++) {
            cout << "*";
        }
        cout << " \n";
    }

    

    return 0;
}


############# 



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
        cout << "\n";
    }
    
     
    

    return 0;
}



############












