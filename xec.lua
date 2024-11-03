local args = {...}
local possible_args = {
    ["-S"] = true, --Stores output to log.xml
    ["-D"] = true, --Debug Mode
    ["-I"] = true, --Include every default library
    ["-L"] = true, --Low level compiling, compiles everything into a single file
    ["-A"] = true, --Compile to pure .as
    ["-B"] = true, --Compile to pure .as -> .bin
    ["-C"] = true, --Compile to .xec for console usage
}

local syntax = "xec <output_file> <input_root> [-S -D -I -L -A]"
if #args < 2 then
    error("MISSING ARGUMENTS")
end
local f = io.open(args[1], "r")
if not f then
    error("INVALID FILE FOUND > " .. args[1])
end
f:close()