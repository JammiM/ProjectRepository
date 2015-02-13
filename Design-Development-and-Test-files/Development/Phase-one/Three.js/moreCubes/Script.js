//This Script defines the functionality to create cubes.

function initialize() {
	//Define Camera
	camera = new THREE.Camera( 70, window.innerWidth / window.innerHeight, nearPlane, farPlane );
	camera.position.y = 150;
	camera.position.z = 350;
  
  
	//Define Scene
	scene = new THREE.Scene();

	stats = new Stats();
	stats.domElement.style.position = 'absolute';
	stats.domElement.style.top = '0px';
	container.appendChild( stats.domElement );
	
}//initialize 




