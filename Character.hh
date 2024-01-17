#include "Gun.hh"

class Character{
    private:
        bool life[5];
        int life_index;
        

    bool _is_live(){
        int i = 0;
        for(bool l:life ){
            if(l == false){
                i++;
            }
        }

        if(i == 5){
            return false;
        }
    }
    
    public:

        Character(){
            for(int i = 0; i < 5; i++){
                this->life[i] = true;
            }
            this->life_index = 0;
        }

        bool shoot_himself(Gun g){
            if(g.gun_shoot_himself()){
                this->life[this->life_index] = false;
                return false;
            }else{
                return _is_live();
            }
        }

        int getLife(){
            int i = 0;
            for(bool l:this->life ){
                if(l == false){
                    i++;
                }
            }
            return i;
        }

        bool a()
        {
            return true;
        }
};