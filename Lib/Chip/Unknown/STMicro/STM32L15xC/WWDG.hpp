#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Window watchdog
    namespace Nonecr{    ///<Control register
        using Addr = Register::Address<0x40002c00,0xffffff00,0,unsigned>;
        ///Activation bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> wdga{}; 
        ///7-bit counter (MSB to LSB)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,0),Register::ReadWriteAccess,unsigned> t{}; 
    }
    namespace Nonecfr{    ///<Configuration register
        using Addr = Register::Address<0x40002c04,0xfffffc00,0,unsigned>;
        ///Early wakeup interrupt
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> ewi{}; 
        ///Timer base
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> wdgtb1{}; 
        ///WDGTB0
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> wdgtb0{}; 
        ///7-bit window value
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,0),Register::ReadWriteAccess,unsigned> w{}; 
    }
    namespace Nonesr{    ///<SR
        using Addr = Register::Address<0x40002c08,0xfffffffe,0,unsigned>;
        ///EWIF
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ewif{}; 
    }
}