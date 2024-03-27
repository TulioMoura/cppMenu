#include<vector>
#include<string>
#include"menu.h"

    menu* menu::back(){
        return father;
    }
    menu* menu::foward(int index){
        return childs.at(index);
    }
    void menu::include(menu* child){
        childs.push_back(child);
        child->father = this;
    }
    std::string menu::list_items(){
        std::string result = "";
        for (auto &&i : childs)
        {
          result = result+"\n"+i->label;  
        }
        return result;
        
    }
    menu::menu(std::string lb, bool l){
        label = lb;
        leaf = l;
        father = NULL;
        intValue =0;
        boolValue = false;
        stringValue = "";
        
        return;
    }
    
