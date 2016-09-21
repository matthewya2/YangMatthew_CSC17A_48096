/* 
 * File:   main.cpp
 * Author: Matthew Yang
 *
 * Created on September 20, 2016, 9:45 PM
 */

#include <iostream>
using namespace std;

int main(int argc, char** argv) {
    
    // Declare variables
    bool x       = true;
    bool y       = true;
    bool notx    = !x;
    bool noty    = !y;
    bool xandy   = x&&y;
    bool xory    = x||y;
    bool xXy     = x^y;
    bool xXyXy   = x^y^y;
    bool xXyXx   = x^y^x;
    bool notxany = !(x&&y);
    bool nxorny  = !x||!y;
    bool notxory = !(x||y);
    bool nxandny = !x&&!y;
    
    //output values for row 1
    cout << (x? 'T':'F');
    cout << (y? 'T':'F');
    cout << (notx? 'T':'F');
    cout << (noty? 'T':'F');
    cout << (xandy? 'T':'F');
    cout << (xory? 'T':'F');
    cout << (xXy? 'T':'F');
    cout << (xXyXy? 'T':'F');
    cout << (xXyXx? 'T':'F');
    cout << (notxany? 'T':'F');
    cout << (nxorny? 'T':'F');
    cout << (notxory? 'T':'F');
    cout << (nxandny? 'T':'F')<<endl;
    
    //variables for line 2
    x       = true;
    y       = false;
    notx    = !x;
    noty    = !y;
    xandy   = x&&y;
    xory    = x||y;
    xXy     = x^y;
    xXyXy   = x^y^y;
    xXyXx   = x^y^x;
    notxany = !(x&&y);
    nxorny  = !x||!y;
    notxory = !(x||y);
    nxandny = !x&&!y;
    
    //output lines for row 2
    cout << (x? 'T':'F');
    cout << (y? 'T':'F');
    cout << (notx? 'T':'F');
    cout << (noty? 'T':'F');
    cout << (xandy? 'T':'F');
    cout << (xory? 'T':'F');
    cout << (xXy? 'T':'F');
    cout << (xXyXy? 'T':'F');
    cout << (xXyXx? 'T':'F');
    cout << (notxany? 'T':'F');
    cout << (nxorny? 'T':'F');
    cout << (notxory? 'T':'F');
    cout << (nxandny? 'T':'F')<<endl;       
    
    //variables for row 3
    x       = false;
    y       = true;
    notx    = !x;
    noty    = !y;
    xandy   = x&&y;
    xory    = x||y;
    xXy     = x^y;
    xXyXy   = x^y^y;
    xXyXx   = x^y^x;
    notxany = !(x&&y);
    nxorny  = !x||!y;
    notxory = !(x||y);
    nxandny = !x&&!y;
    
    //output for line 3
    cout << (x? 'T':'F');
    cout << (y? 'T':'F');
    cout << (notx? 'T':'F');
    cout << (noty? 'T':'F');
    cout << (xandy? 'T':'F');
    cout << (xory? 'T':'F');
    cout << (xXy? 'T':'F');
    cout << (xXyXy? 'T':'F');
    cout << (xXyXx? 'T':'F');
    cout << (notxany? 'T':'F');
    cout << (nxorny? 'T':'F');
    cout << (notxory? 'T':'F');
    cout << (nxandny? 'T':'F')<<endl;
    
    //variables for line 4
    x       = false;
    y       = false;
    notx    = !x;
    noty    = !y;
    xandy   = x&&y;
    xory    = x||y;
    xXy     = x^y;
    xXyXy   = x^y^y;
    xXyXx   = x^y^x;
    notxany = !(x&&y);
    nxorny  = !x||!y;
    notxory = !(x||y);
    nxandny = !x&&!y;
    
    //output for line 4
    cout << (x? 'T':'F');
    cout << (y? 'T':'F');
    cout << (notx? 'T':'F');
    cout << (noty? 'T':'F');
    cout << (xandy? 'T':'F');
    cout << (xory? 'T':'F');
    cout << (xXy? 'T':'F');
    cout << (xXyXy? 'T':'F');
    cout << (xXyXx? 'T':'F');
    cout << (notxany? 'T':'F');
    cout << (nxorny? 'T':'F');
    cout << (notxory? 'T':'F');
    cout << (nxandny? 'T':'F')<<endl;
    return 0;
    
}

