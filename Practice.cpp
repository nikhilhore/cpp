// { Driver Code Starts
//Initial Template for C++


#include <iostream>
#include <vector>
#include <climits>
#include <queue>
#include <sstream>
using namespace std;

// Tree Node
struct Node
{
    int data;
    Node* left;
    Node* right;
};

// Utility function to create a new Tree Node
Node* newNode(int val)
{
    Node* temp = new Node;
    temp->data = val;
    temp->left = NULL;
    temp->right = NULL;

    return temp;
}

// Function to Build Tree
Node* buildTree(string str)
{
    // Corner Case
    if (str.length() == 0 || str[0] == 'N')
        return NULL;

    // Creating vector of strings from input
    // string after spliting by space
    vector<string> ip;

    istringstream iss(str);
    for (string str; iss >> str; )
        ip.push_back(str);

    // Create the root of the tree
    Node* root = newNode(stoi(ip[0]));

    // Push the root to the queue
    queue<Node*> queue;
    queue.push(root);

    // Starting from the second element
    int i = 1;
    while (!queue.empty() && i < ip.size()) {

        // Get and remove the front of the queue
        Node* currNode = queue.front();
        queue.pop();

        // Get the current node's value from the string
        string currVal = ip[i];

        // If the left child is not null
        if (currVal != "N") {

            // Create the left child for the current node
            currNode->left = newNode(stoi(currVal));

            // Push it to the queue
            queue.push(currNode->left);
        }

        // For the right child
        i++;
        if (i >= ip.size())
            break;
        currVal = ip[i];

        // If the right child is not null
        if (currVal != "N") {

            // Create the right child for the current node
            currNode->right = newNode(stoi(currVal));

            // Push it to the queue
            queue.push(currNode->right);
        }
        i++;
    }

    return root;
}


 // } Driver Code Ends
//User function Template for C++

class Solution
{
    public:
    struct Pair{
        int level;
        Node* temp;
    };
    
    vector<int> largestValues(Node* root)
    {
        //code here
        vector <int> arr;
        if (root==NULL) return arr;
        struct Pair p;
        queue <Pair> q;
        p.level= 1;
        p.temp= root;
        q.push(p);
        vector <Pair> v;
        while(!q.empty()){
            int lev= q.front().level;
            Node* cur= q.front().temp;
            v.push_back(q.front());
            q.pop();
            if (cur->left!=NULL){
                p.level= lev+1;
                p.temp= cur->left;
                q.push(p);
            }
            if (cur->right!=NULL){
                p.level= lev+1;
                p.temp= cur->right;
                q.push(p);
            }
        }
        int lev= 1, i=0;
        while (i<v.size()) {
            int maxx= INT_MIN;
            while(v[i].level== lev){
                maxx= max(maxx, v[i].temp->data);
                i++;
            }
            if (maxx!=INT_MIN) arr.push_back(maxx);
            lev++;
        }
    }
};

// { Driver Code Starts.
int main()
{

    int t;
    cin >> t;
    getchar();
    while (t--)
    {

        string inp;
        getline(cin, inp);

        struct Node* root = buildTree(inp);
        Solution ob;
        vector<int> ans = ob.largestValues(root);

        for (int i = 0; i < ans.size(); i++)
            cout << ans[i] << " ";

        cout << "\n";
    }
    return 0;
}  // } Driver Code Ends