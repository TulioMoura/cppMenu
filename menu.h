#include<vector>
#include<string>
class menu{
    public:
    menu * father;

    std::vector<menu*> childs;
    bool leaf;
    
    std::string label;
    int intValue;
    bool boolValue;
    std::string stringValue;
    
    menu* back();
    menu* foward(int index);
    void include(menu* child);
    
    std::string list_items();
    menu(std::string label, bool leaf);
};