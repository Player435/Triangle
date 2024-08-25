int main() 
{
    Triangle triangle(3, 4, 5);

  
    if (triangle.estvalide()) 
    {
        triangle.getCote(); 
        std::cout << "Perimetre: " << triangle.getPerimetre() << std::endl;
        std::cout << "Surface: " << triangle.getSurface() << std::endl;
    } 
    else 
    {
        std::cout << "non" << std::endl;
    }

    return 0;
}
