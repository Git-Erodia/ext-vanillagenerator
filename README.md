# ext-vanillagenerator
PHP Extension for VanillaGenerator noise written in C++. There is some negligible floating point error which sometimes
resulting in an unexpected natural world generation error, for example water is being generated underneath a darkOakTree_.

## Performance impact
To be done.
<!-- 
TODO: Measure the time to execute Random and other noise classes.
-->

## Build from sources
There is 2 way of installing this extension, but first you need to compile them to an actual extension for your machine.

### Windows
In your `.github` folder and run `install.ps1` then followed by `build.ps1` in `extnoise` directory,
your extension will be located in `x64\Release_TS\php_vanillagenerator.dll`

Please make sure that you have enabled configured `php.ini` correctly in your PHP build.

### Linux
In extnoise directory, execute `build.sh`, your extension will be located in `modules/`

## Images
These worlds are generated by extnoise.

![Chunk Generation 1](https://cdn.discordapp.com/attachments/512987829970665482/846261229009764372/unknown.png)
![Chunk Generation 2](https://cdn.discordapp.com/attachments/512987829970665482/846262473379282964/unknown.png)
