//#include <iostream>
//#include <iomanip>
//
//int main() {
//    for (int i = 1; i <= 151; ++i) {
//        std::wcout << L"TexLoad(L\"" << std::setw(3) << std::setfill(L'0') << i << L"_Field\", L\"Texture\\Pokemon\\" << std::setw(3) << std::setfill(L'0') << i << L"_Field.bmp\");" << std::endl;
//    }
//
//    return 0;
//}

#include <iostream>
#include <iomanip>

int main() {
    for (int i = 1; i <= 151; ++i) {
        std::wcout << "_pokemonTextureContainer[L\"" << std::setfill(L'0') << std::setw(3) << i << "\"][PokemonSprite_Type::Field] = L\"" << std::setfill(L'0') << std::setw(3) << i << "_Field\";" << std::endl;
    }

    return 0;
}