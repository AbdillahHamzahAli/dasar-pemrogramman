// INPUT
// " rate R2D2 48 2 time 555666 "


#include <stdio.h>
#include <ctype.h>

enum state {start,current_state, build_id,build_num,identifier,number,stop};

enum state transition(enum state current, char transition);

int main()
{
    char transition_char = ' ';
    enum state current_state = start;
	do {
		if (current_state == identifier) {
			printf(" - Identifier\n");
			current_state = start;
		} else if (current_state == number) {
			printf(" - Number\n");
			current_state = start;
		}
		scanf("%c", &transition_char);
		if (transition_char != ' ')
			printf("%c", transition_char);
		current_state = transition(current_state, transition_char);
	} while (current_state != stop);
}

enum state transition(enum state current, char transition){
	// printf("_");
	if(current == start)
    {
        if(isdigit(transition))
            return build_num;

        if(isalpha(transition))
            return build_id;

        if(transition == '.')
            return stop;

        if(transition == ' ')
            return start;

        else
            return start;
    }

    if(current == build_id)
    {
        if(isdigit(transition))
            return build_id;

        if(isalpha(transition) || transition == '_')
            return build_id;

        if(transition == ' ')
            return identifier;
    }

    if(current == build_num)
    {
        if(isdigit(transition))
            return build_num;
		if(transition == ' ')
            return number;
    }

    return stop;
}
