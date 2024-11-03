-- Math .luac
require "Assembly_Utils"
local api = {}
api.sqrt = function(value)
    return "LDI eax, " .. To_Hexadecimal_Assembly(value) .. "\nINT 0x74"
end
api.fact = function(value1)
    return "LDI eax, " .. To_Hexadecimal_Assembly(value1) .. "\nINT 0x75"
end
local Xenon_Side = {
    {
        comment = "This is a sqrt function sqrt(x)",
        name = "sqrt",
        func = "math_sqrt",
        args = {"integer"},
        f = api.sqrt,
    },
    {
        comment = "This is a factorial function x!",
        name = "fact",
        func = "math_factorial",
        args = {"integer"},
        f = api.fact,
    }
}
return Xenon_Side