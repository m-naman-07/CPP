//program for displaying day name using switch case 

# include<iostream>

int main()
{
	int day;
	std::cout<<"enter the day no";
	std::cin>>day;
    
    switch(day){
        case 1: 
            std::cout<<"monday"<<std::endl;
            break;
	    case 2: 
            std::cout<<"tuesday"<<std::endl;
	        break;
        case 3: 
            std::cout<<"wednesday"<<std::endl;
  		    break;
	    case 4:
            std::cout<<"thursday"<<std::endl;
		    break;
	    case 5:
            std::cout<<"friday"<<std::endl;
		    break;
	    case 6:
            std::cout<<"saturday"<<std::endl;
		    break;
	    case 7:
            std::cout<<"sunday"<<std::endl;
		    break;
	    default:
            std::cout<<"invalid day no"<<std::endl;
	}
	return 0;
}
