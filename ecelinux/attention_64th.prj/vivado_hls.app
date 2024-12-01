<AutoPilot:project xmlns:AutoPilot="com.autoesl.autopilot.project" projectType="C/C++" name="attention_64th.prj" top="dut">
    <includePaths/>
    <libraryFlag/>
    <files>
        <file name="../../data_64th" sc="0" tb="1" cflags=" -Wno-unknown-pragmas" csimflags=" -Wno-unknown-pragmas" blackbox="false"/>
        <file name="../../attention_test.cpp" sc="0" tb="1" cflags=" -DSIXTYFOURTH -Wno-unknown-pragmas" csimflags=" -Wno-unknown-pragmas" blackbox="false"/>
        <file name="attention.cpp" sc="0" tb="false" cflags="-DSIXTYFOURTH" csimflags="" blackbox="false"/>
    </files>
    <solutions>
        <solution name="solution1" status=""/>
    </solutions>
</AutoPilot:project>

