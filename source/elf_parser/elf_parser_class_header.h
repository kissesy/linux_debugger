#ifndef __H_ELF_CLASS_
#define __H_ELF_CLASS_

class Elf_Parser
{
  private:
    int machine_bit;
    bool strip;
    strings file_name;
    bool parsing_success;

    bool elf_header_parser();
    /*32bit binary parse*/
    bool elf_program_header_parser32();
    bool elf_section_header_parser32();
    bool elf_dynamic_section_parser32();
    /*64bit binary parse*/
    bool elf_program_header_parser64();
    bool elf_section_header_parser64();
    bool elf_dynamic_section_parser65();
    bool elf_symbol_section_parser64();
  public:
    Elf_Parser();
    ~Elf_Parser();
    bool elf_parse();
    /*elf print */
    int elf_section_header_print();
    int elf_header_print();
    int elf_program_header_print();
    int elf_symbol_print();
    int elf_dynamic_symbol_print();
    bool elf_
}

#endif
