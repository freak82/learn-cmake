#include "app0/app.hpp"
#include <lib0/lib.hpp>

template <>
struct std::formatter<bpo::options_description>
{
    constexpr auto parse(auto& ctx) { return ctx.begin(); }
    auto format(const bpo::options_description&, auto& ctx) const
    {
        // TODO:
        return ctx.out();
    }
};

int main(int argc, char** argv)
{
    bpo::options_description opts("Options");
    // clang-format off
    opts.add_options()
        ("help,H", "This help message")
        ("version,V", "Version and other info about the binary");
    // clang-format on
    bpo::variables_map vm;
    bpo::store(bpo::parse_command_line(argc, argv, opts), vm);
    bpo::notify(vm);
    if (vm.count("help")) {
        std::println(stdout, "{}", opts);
    } else if (vm.count("version")) {
        std::println(stdout, "CMake application.\n"
                             "Version: 0.0.1");
    } else {
        std::println("the app0::fun result: {}", app0::fun());
        std::println("the lib0::fun result: {}", lib0::fun());

        using namespace std::string_view_literals;
        boost::unordered_flat_map<int, std::string_view> map = {
            {24, "the_first_one"sv},
            {42, "the_second_one"sv},
            {84, "the_last_one"sv},
        };
        std::println("The map entries: {}", map);
    }

    return EXIT_SUCCESS;
}
