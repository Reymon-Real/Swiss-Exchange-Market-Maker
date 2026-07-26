# Swiss Exchange Market Maker

## Legal notice

No proprietary files belonging to IBKR are distributed.

No warranty of any kind is provided regarding its operation.

## Project concept

This bot was developed to provide liquidity to the markets for its less liquid assets via the broker ***IBKR***.

## Compilation

This project assumes that the default path for `libTwsSocketClient.so` is `/usr/local/lib` or `/usr/lib`

In the case of the headers, it is assumed that they are located in
`/usr/local/include/IBKR/TwsSocketClient` and `/usr/local/include/IBKR/TwsSocketClient/protobufUnix`

To change the header path, go to the `meson.build` and edit the paths.
Just make sure you keep the `IBKR/TwsSocketClient` structure so you don’t have to change all the include statements in the source code.

## JSON Config Format

This file must be placed in the same directory as the executable and must be named `config.json`

In this format, you specify the path to all the configuration files for each instrument you intend to operate.

Here is an example

```json
{
	"instruments": [
		"config/ebs/glkbn.json",
		"config/ebs/zuger.json"
	]
}
```

## JSON Setting Format

In this format, you define the connection, symbol, order management and risk management.

Here is an example

```json
{	
	// Interactive Broker Settings
	"host": "127.0.0.1", // Host of the server
	"port": 7497,        // Port of set on IBKR
	"userId": 1,         // Id of the user for operate
	"extraAuth": false,  // Extra Authentication for IBKR

	// Symbol Settings
	"symbol": "GLKBN", // Symbol name
	"secType": "STK",  // Sector Type (View Docs)
	"exchange": "EBS", // The exchange on which the security is listed
	"currency": "CHF", // Currency in which the instrument is priced
	
	// Order Settings
	"bid": 1, 		  // Number of orders of buy
	"ask": 1,		  // Number of orders of sell
	"quantity": 100,  // Size of the orders
	"inventory": 1000, // Number of max inventory

	// Risk Setting
	"gamma": 0.5 // Risk Aversion for Avellaneda-Stoikov Model
}
```

## License

The source code for this software is licensed under the AGPL-3-or-later licence.
This does not apply to proprietary tools or files belonging to IBKR.