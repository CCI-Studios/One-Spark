<?php

$aliases['dev'] = array(
	'uri'=> 'dev.one-spark.ca',
	'root' => '/home/onespark/subdomains/dev/public_html',
	'remote-host'=> 'host.lambtonshield.com',
	'remote-user'=> 'onespark',
	'path-aliases'=> array(
		'%files'=> 'sites/default/files',
	)
);


$aliases['staging'] = array(
	'uri'=> 'onespark.ccistaging.com',
	'root' => '/home/staging/subdomains/onespark/public_html',
	'remote-host'=> 'host.ccistudios.com',
	'remote-user'=> 'staging',
	'path-aliases'=> array(
		'%files'=> 'sites/default/files',
	),
	'ssh-options'=> '-p 37241'
);
