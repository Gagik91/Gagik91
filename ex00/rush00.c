void	ft_putchar(void);

void	rush(int x, int y)
{
	int row;
    int col;
    
	row = 1;
	while(row <= y)
	{
		if (row == 1 || row == y)
		{
		    col = 1;
		    while   (col <= x)
		    {
		        if  (col == 1 || col == x)
		        {
		            ft_putchar('o');
		        }
		        else if (col <= (x - 1))
		        {
		            ft_putchar('-');
		        }
		        col++;
		    }
		    
		}
		else if (row <= (y - 1))
		{
		    int col;
		    
		    col = 1;
		    while(col <= x)
		    {
		        if  (col == 1 || col == x)
		        {
		            ft_putchar('|');
		        }
		        else if(col <= (x - 1))
		        {
		            ft_putchar(' ');
		        }
		        col++;
		    }
		}
		ft_putchar('\n');
		row++;
	}
}
