//
// Created by ruby on 17.12.17.
//

#ifndef HOME_TEST_CORRECTION_CLASS_SETTINGS_H
#define HOME_TEST_CORRECTION_CLASS_SETTINGS_H



class treeNode {

    friend class binTree;
public:

    int giveMeNodeValue(){
        return NodeValue;
    };
    treeNode(const int &value){
        NodeValue = value;
        left = right = 0;
    };

protected:
    treeNode *left, *right, *mom;
    int NodeValue;
};

class binTree{
public:
    binTree(){
        first = 0;
        std::cout << "Tree created!" << std::endl;
    };

    /*~binTree();*/

    int makeNewNode(const int &newVal ){
        treeNode* newNode = new treeNode(newVal);
        treeNode* tmp1;
        treeNode* tmp2;

        newNode -> mom = 0;
        newNode -> left = 0;
        newNode -> right = 0;


        tmp1 = first;

        while(tmp1 != 0)
        {
            tmp2 = tmp1;
            if(newVal < tmp1 -> giveMeNodeValue() )
                tmp1 = tmp1 -> left;
            else
                tmp1 = tmp1 -> right;
        }

        newNode -> mom = tmp2;

        if(tmp2 == 0)
            first = newNode;
        else
        {
            if(newVal < tmp2 -> giveMeNodeValue() )
                tmp2 -> left = newNode;
            else
                tmp2 -> right = newNode;
        }
        std::cout << "New Node Created!" << std::endl;
        return 0;
    };

    treeNode* deleteThisNode(treeNode*);

    void printAllNodeValues(treeNode * number){

        if(number != 0)
        {
            printAllNodeValues(number -> left);
            std::cout << number -> giveMeNodeValue() << std::endl;
            printAllNodeValues(number -> right);

        }
    };

    treeNode* findMinimum(){
        treeNode* min = giveMeFirst();
        while (min -> left != 0){
            min = min -> left;
        }
        int forPrint = min -> NodeValue;
        std::cout << "Minimum is: ";
        std::cout <<  forPrint << std::endl;
        return min;
    }

    treeNode* findMaximum(){
        treeNode* max = giveMeFirst();
        while (max -> right != 0){
            max = max -> right;
        }
        int forPrint = max -> NodeValue;
        std::cout << "Maximum is: ";
        std::cout <<  forPrint << std::endl;
        return max;
    }

    treeNode* giveMeFirst(){
        return  first;
    }





private:
    treeNode *first;

};

#endif //HOME_TEST_CORRECTION_CLASS_SETTINGS_H
