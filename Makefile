NAME := push_swap

INC := push_swap.h

EXEC_BONUS := checker

SRC := push_swap.c\
		stack.c\
		more_stack.c\
		ft_atoi.c\
		median.c\
		1sort.c\
		md.c\
		checkarg.c\
		sort_5.c\
		ft_split.c\
		main.c\
		checkarg2.c\
		more_ps.c\
		moreft.c\
		maind.c 


SRC_BONUS := checker.c \
			stack.c\
			push_swap.c\
			more_stack.c\
			ft_atoi.c\
			median.c\
			1sort.c\
			md.c\
			checkarg.c\
			sort_5.c\
			ft_split.c\
			checkarg2.c\
			more_ps.c\
			moreft.c\
			maind.c\
			checker2.c\


OBJ := $(SRC:.c=.o)

OBJS_BONUS := $(SRC_BONUS:.c=.o)

FLAG := -Wall -Wextra -Werror -g

%.o : %.c $(INC)
	gcc $(FLAG) -c $< -o $@

all : $(NAME)

$(NAME) : $(OBJ)
	gcc $(FLAG) $(OBJ) -o $(NAME)

bonus : $(OBJS_BONUS)
		gcc $(CFLAG) $(OBJS_BONUS) -o ${EXEC_BONUS} 

%.o: %.c
		gcc $(CFLAG) -c $< $(INC) -o $@

clean :
	rm -f $(OBJ)

fclean : clean
	rm -f $(NAME)

re : fclean all