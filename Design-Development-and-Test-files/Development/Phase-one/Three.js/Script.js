
var startTime	= Date.now();
var container;
var camera, scene, renderer, stats;
var cube;

initialize();
animate();


function initialize() {
	
	//Define Camera
	camera = new THREE.Camera( 70, window.innerWidth / window.innerHeight, 1, 1000 );
	camera.position.y = 150;
	camera.position.z = 350;
//	camera.target.position.y = 150;

//camera.position.set( -15, 10, 15 );
//camera.lookAt( scene.position );

	


  //  camera.position.z = 1000;









	//Define Scene
	scene = new THREE.Scene();
	
	//Define a Cube
    cube = new THREE.Mesh(new THREE.CubeGeometry(200, 200, 200), new THREE.MeshBasicMaterial({
        wireframe: true,
    color: 0xff0000,
      }));

	cube.position.y = 150;



	
	//Add the cube to the scene
	scene.addObject( cube );
	
	//Create an element
	container = document.createElement( 'div' );
	
	//Add the element to page
	document.body.appendChild( container );
	
	//Create a renderer
	renderer = new THREE.WebGLRenderer();
	renderer.setSize( window.innerWidth, window.innerHeight );
	
	//Add the renderer to the element
	container.appendChild( renderer.domElement );
	
	stats = new Stats();
	stats.domElement.style.position = 'absolute';
	stats.domElement.style.top = '0px';
	container.appendChild( stats.domElement );
	
}//initialize 

function animate() {
	render();
	requestAnimationFrame( animate );
	stats.update();
}//animate



function render(){

	cube.rotation.x += 0.02;
	cube.rotation.y += 0.02;
	renderer.render( scene, camera );
}//render






