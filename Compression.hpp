#ifndef DATA_COMPRESSOR_COMPRESSION_HPP
#define DATA_COMPRESSOR_COMPRESSION_HPP

#include <string>


class Compression {
public:

    Compression(const std::string &file_path);

    virtual ~Compression();

    virtual void compress() = 0;

    virtual void decompress() = 0;

    virtual void open() = 0;

    virtual void close() = 0;

    virtual size_t getSize() const = 0;

protected:
    std::string file_path;
    size_t file_size;
};

#endif //DATA_COMPRESSOR_COMPRESSION_HPP
