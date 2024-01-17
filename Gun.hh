
#ifndef GUN_HH
#define GUN_HH


class Gun{
    private:
        int chamber_index;
        bool projectile[6];
    
    public:
        Gun()
        {
            this->chamber_index = 0;
            
        }

        bool gun_shoot_himself(){
            if(this->projectile[this->chamber_index] == false ){
                this->chamber_index++;
                return false;
            }else{
                this->chamber_index++;
                return true;
            }
        }
        
};

#endif // GUN_HH