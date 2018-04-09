int je_prestupny(unsigned int rok)
{
    if (rok % 100 == 0)
	return (rok % 400 == 0);
    else
	return (rok % 4 == 0);
}
