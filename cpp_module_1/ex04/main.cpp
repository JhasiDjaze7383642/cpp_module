/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarakoto <rarakoto@student.42antananarivo  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/15 12:43:31 by rarakoto          #+#    #+#             */
/*   Updated: 2024/12/16 11:36:48 by rarakoto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <iostream>
#include <string>

void	replace_occurence(char **argv, std::string &line, std::ofstream &output_file)
{
	if (line.compare(argv[2]))
		;
	else
		output_file << line << std::endl;
}

void	copy_and_replace_occurence(char **argv, std::ofstream &output_file, std::ifstream &input_file)
{
	std::string	line;

	(void)argv;
	while (std::getline(input_file, line))
		replace_occurence(argv, line, output_file);
	output_file.close();
}

void	create_output_file_and_process_line(char **argv, std::ifstream &in_file)
{
	std::ofstream	output_file;
	std::string		filename;

	filename = std::string(argv[1]) + std::string("_replace");
	output_file.open(filename.c_str(), std::ios::app);
	if (output_file.is_open())
		copy_and_replace_occurence(argv, output_file, in_file);
	else
		std::cerr << "ft_sed: can't create a temporary file to output.";
	in_file.close();
}

void	process_file(char **argv)
{
	std::ifstream	in_file;

	in_file.open(argv[1], std::ios::in);
	if (in_file.is_open())
		create_output_file_and_process_line(argv, in_file);
	else
		std::cerr << "ft_sed: can't read " << argv[1] << ": No such file or directory.\n";
}


int main (int argc, char **argv)
{
	(void)argv;
	if (argc == 4)
		process_file(argv);
	else
		std::cerr << "ft_sed: require 3 arguments.";
	return 0;
}
